#include <iostream>
#include <irrlicht.h>
#include <IrrlichtDevice.h>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class CAppReceiver : public IEventReceiver
{
private:
  bool KeyDown[KEY_KEY_CODES_COUNT];
public:
  CAppReceiver(){
    for (int i = 0; i < KEY_KEY_CODES_COUNT; i++){
      KeyDown[i] = false;
    }
  }
  virtual bool OnEvent(const SEvent& event){
    switch (event.EventType){
      case EET_KEY_INPUT_EVENT:
	{
	KeyDown[event.KeyInput.Key] =
	event.KeyInput.PressedDown;
	break;
	}
      default:
	break;
      }
    return false;
    }
  virtual bool isKeyDown(EKEY_CODE keyCode) const{
    return KeyDown[keyCode];
  }
  virtual bool isKeyUp(EKEY_CODE keyCode) const{
    return !KeyDown[keyCode];
  }
};


int main() {
    IrrlichtDevice *device;
    CAppReceiver appReceiver;
  
    device  = createDevice( video::EDT_OPENGL,
			    dimension2d<u32>(640, 480),
			    16, false, false, false, &appReceiver);
    if (!device)
        return -1;
    IVideoDriver *driver = device->getVideoDriver(); 
    ISceneManager *smgr = device->getSceneManager();
    IGUIEnvironment *guienv = device->getGUIEnvironment();
    
    //TERRAIN
//     ITerrainSceneNode *terrain = smgr->addTerrainSceneNode("../media/terrain/engine/heightmap.png");
//     terrain->setScale(vector3df(1.0f, 0.25f, 1.0f));
//     terrain->setMaterialFlag(EMF_LIGHTING, false);
//     terrain->setMaterialTexture(0, driver->getTexture("../media/terrain/terraintexture.bmp"));
    
    //PERSONAJE JULIAN
    IAnimatedMesh* meshJ = smgr->getMesh("../media/char1.b3d");/*Char1.armadura.2.md3*/
    IAnimatedMeshSceneNode* nodeJ = smgr->addAnimatedMeshSceneNode(meshJ);
    nodeJ->setScale(core::vector3df(9, 9, 9));
//     nodeJ->setFrameLoop();

    std::cout << "loop_mode: " << nodeJ->getLoopMode() << "\tframe_count: " << nodeJ->getEndFrame() << 
    "\ntype: " << nodeJ->getType() << std::endl;

    for(u8 boneCount = 0; boneCount < 20 ; boneCount ++){
      std::cout << nodeJ->getJointNode(boneCount)->getName() << "\t" <<  nodeJ->getJointNode(boneCount)->getBoneIndex()
      << std::endl;
    }
    
    IBoneSceneNode *hueso = nodeJ->getJointNode("Codo.R"); 
    IBoneSceneNode *hueso2 = nodeJ->getJointNode(9); 
    ISceneNodeAnimator *animin = smgr->createRotationAnimator(vector3df(2,2,2));
    ISceneNodeAnimator *animon = smgr->createRotationAnimator(vector3df(1,2,3));
    hueso->addAnimator(animin);
    hueso2->addAnimator(animon);
    std::cout <<"joints: " << nodeJ->getJointCount() << std::endl;
//     nodeJ->setDebugDataVisible(EDS_SKELETON);
//     
    if (nodeJ)
    {
//       nodeJ->setAnimationSpeed(100);
      nodeJ->setMaterialFlag(EMF_LIGHTING, true);
//       nodeJ->setMaterialFlag(video::EMF_TEXTURE_WRAP, true);
//       nodeJ->setMaterialFlag(video::EMF_BLEND_OPERATION, true);
      nodeJ->setMaterialTexture(0, driver->getTexture("../media/textura_completa.png"));
//       nodeJ->setMaterialTexture(0, driver->getTexture("../media/vistas_detective_cuerpo0002.png"));
//       nodeJ->setMaterialTexture(0, driver->getTexture("../media/boceto_detective_cara0001.png"));
      std::cout << "materialCount: " << nodeJ->getMaterialCount() << std::endl;
//       nodeJ->getMaterial(0).setFlag();
//       std::cout << "name: " << mato.MaterialType  << "\n";
    }
//     
    //LUZ
     smgr->setAmbientLight(SColor(255,255,255,0));
//     ILightSceneNode* myLight = smgr->addLightSceneNode();
//     myLight->setPosition(vector3df(0.0f, 20.0f, 0.0f));
//     SLight lightData;
//     lightData.DiffuseColor = SColor(255, 0, 255, 0);
//     myLight->setLightData(lightData);
    
    //CAMERAS
    ICameraSceneNode *camera = smgr->addCameraSceneNodeFPS();
    ICameraSceneNode *camera2 = smgr->addCameraSceneNodeMaya();
    bool cam_switch = false;
    
    //CUBO
//     vector3df cubeRotation = vector3df(0.0f, 0.0f, 0.0f);
//     IMeshSceneNode* myCube = smgr->addCubeSceneNode();
//     if (!myCube)
//     return 1;
//     if (myCube){
//       myCube->setMaterialFlag(EMF_LIGHTING, true);
//       myCube->setMaterialTexture( 0, driver->getTexture("../media/vistas_detective_cuerpo0002.png"));
//     }
    
    //LUZ + BILLBOARD
//     ILightSceneNode* myPointLight = smgr->addLightSceneNode();
//     myPointLight->setPosition(vector3df(0.0f, 20.0f, 0.0f));
//     ISceneNode* pointLightBill = smgr->addBillboardSceneNode(myPointLight, dimension2d<f32>(20, 20));
//     pointLightBill->setMaterialFlag(video::EMF_LIGHTING, false);
//     pointLightBill->setMaterialType(video::EMT_TRANSPARENT_ADD_COLOR);
//     pointLightBill->setMaterialTexture(0, driver->getTexture("../media/portal4.bmp"));
    
    //SCENE NODE
//     IAnimatedMesh* mesh = smgr->getMesh("../media/room.3ds");
//     smgr->getMeshManipulator()->makePlanarTextureMapping(mesh->getMesh(0), 0.004f);
//     ISceneNode* node = 0;
//     node = smgr->addAnimatedMeshSceneNode(mesh);
//     node->setMaterialTexture(0, driver->getTexture("../media/wall.jpg"));
//     node->getMaterial(0).SpecularColor.set(0, 0, 0, 0);

    //DWARF
//     IAnimatedMeshSceneNode* dwarf = smgr->addAnimatedMeshSceneNode(smgr->getMesh("../media/dwarf.x"));
//     dwarf->addShadowVolumeSceneNode();
//     dwarf->setPosition(core::vector3df(-90, 70, 30));
//     nodeJ->setPosition(core::vector3df(-90, 70, 30));
//     dwarf->setAnimationSpeed(15);
//     dwarf->setScale(core::vector3df(2, 2, 2));
//     std::cout << dwarf->getJointCount() <<  dwarf->getChildren().getSize() << 
//      "\n" << std::endl;
// //       dwarf->setDebugDataVisible();
// 
//     dwarf->setMaterialFlag(video::EMF_NORMALIZE_NORMALS, true);
// //     dwarf->getChildren();
//     smgr->setShadowColor(video::SColor(150, 0, 0, 0));


    
    //BUCLE PPAL
    while (device->run()){
//       myCube->setRotation(cubeRotation);
//       cubeRotation += 0.2f;
      if(device->isWindowActive()){
	if (appReceiver.isKeyDown(KEY_ESCAPE)){
	  device->closeDevice();
	  return 0;
	}
	if (appReceiver.isKeyDown(irr::KEY_SPACE)){
	  cam_switch = !cam_switch;
	}
	if (appReceiver.isKeyDown(irr::KEY_KEY_W)){
	  nodeJ->setFrameLoop(56, 78);
// 	  nodeJ->setRenderFromIdentity(true);
	  nodeJ->addShadowVolumeSceneNode();
	  vector3df currenPos = nodeJ->getPosition();
	  nodeJ->setPosition(vector3df(currenPos.X, currenPos.Y+1, currenPos.Z));
	}
	if (appReceiver.isKeyDown(irr::KEY_KEY_J)){
	  nodeJ->setFrameLoop(156, 200);
	  nodeJ->setTransitionTime(1);
	  
	}
	if(cam_switch){
	  smgr->setActiveCamera(camera2);
	  device->getCursorControl()->setVisible(false);
	}
	else{
	  smgr->setActiveCamera(camera);
	  camera2->setFOV(33.0f);
	}
	driver->beginScene(true, true, SColor(255, 255, 255, 255));
	smgr->drawAll();
	guienv->drawAll();
	driver->endScene();
	}
      else 
	device->yield();
    }
    device->drop();

    return 0;
}

