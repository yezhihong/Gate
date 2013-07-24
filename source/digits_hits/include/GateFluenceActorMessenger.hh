/*----------------------
   GATE version name: gate_v6

   Copyright (C): OpenGATE Collaboration

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See GATE/LICENSE.txt for further details
----------------------*/

/*
  \class  GateFluenceActorMessenger
  \author simon.rit@creatis.insa-lyon.fr
*/

#ifndef GATEFLUENCEACTORMESSENGER_HH
#define GATEFLUENCEACTORMESSENGER_HH

#include "GateImageActorMessenger.hh"

class GateFluenceActor;
class GateFluenceActorMessenger : public GateImageActorMessenger
{
public:
  GateFluenceActorMessenger(GateFluenceActor* sensor);
  virtual ~GateFluenceActorMessenger();

  void BuildCommands(G4String base);
  void SetNewValue(G4UIcommand*, G4String);

protected:
  GateFluenceActor * pFluenceActor;
  G4UIcmdWithAString * pSetResponseDetectorFileCmd;
  G4UIcmdWithABool * pEnableScatterCmd;
  G4UIcmdWithAString * pSetScatterOrderFilenameCmd;
  G4UIcmdWithAString * pSetSeparateScatteringFilenameCmd;
};

#endif /* end #define GATEFLUENCEACTORMESSENGER_HH*/
