// Ghidra extent: 0x588C6090..0x588C60DA (75 mapped bytes).
// Both known callers set ECX to 0x58A24910 and pass a zero second argument.
// FUN_587e8a40 passes (0x22B, 0) after clearing the event queue; FUN_587faec0
// passes the current slot's second DWORD and zero while dispatching a slot.
// This routine forwards its first stack argument to 0x5897CC3C, fills the
// pointer table at [this+0x0C] with results from 0x5897CC36, and writes zero
// to [this+0x10]. The import targets and field types remain unresolved.
extern "C" __declspec(naked) void FUN_588c6090() {
    __asm {
        // 588C6090: MOV EAX,dword ptr [ESP + 0x8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 588C6094: PUSH EBX
        __asm _emit 0x53
        // 588C6095: PUSH ESI
        __asm _emit 0x56
        // 588C6096: PUSH EDI
        __asm _emit 0x57
        // 588C6097: MOV EDI,ECX
        __asm _emit 0x8b
        __asm _emit 0xf9
        // 588C6099: MOV EBX,dword ptr [EDI + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x5f
        __asm _emit 0x04
        // 588C609C: TEST EAX,EAX
        __asm _emit 0x85
        __asm _emit 0xc0
        // 588C609E: JBE 0x588c60a2
        __asm _emit 0x76
        __asm _emit 0x02
        // 588C60A0: MOV EBX,EAX
        __asm _emit 0x8b
        __asm _emit 0xd8
        // 588C60A2: MOV EAX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 588C60A6: PUSH EAX
        __asm _emit 0x50
        // 588C60A7: CALL 0x5897cc3c
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x00
        // 588C60AC: ADD ESP,0x4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        // 588C60AF: XOR ESI,ESI
        __asm _emit 0x33
        __asm _emit 0xf6
        // 588C60B1: TEST EBX,EBX
        __asm _emit 0x85
        __asm _emit 0xdb
        // 588C60B3: JBE 0x588c60d2
        __asm _emit 0x76
        __asm _emit 0x1d
        // 588C60B5: CALL 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0x00
        // 588C60BA: MOV ECX,dword ptr [EDI + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x0c
        // 588C60BD: MOV dword ptr [ECX + ESI*4],EAX
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xb1
        // 588C60C0: INC ESI
        __asm _emit 0x46
        // 588C60C1: CMP ESI,EBX
        __asm _emit 0x3b
        __asm _emit 0xf3
        // 588C60C3: JB 0x588c60b5
        __asm _emit 0x72
        __asm _emit 0xf0
        // 588C60C5: MOV dword ptr [EDI + 0x10],0
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 588C60CC: POP EDI
        __asm _emit 0x5f
        // 588C60CD: POP ESI
        __asm _emit 0x5e
        // 588C60CE: POP EBX
        __asm _emit 0x5b
        // 588C60CF: RET 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        // 588C60D2: MOV dword ptr [EDI + 0x10],ESI
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x10
        // 588C60D5: POP EDI
        __asm _emit 0x5f
        // 588C60D6: POP ESI
        __asm _emit 0x5e
        // 588C60D7: POP EBX
        __asm _emit 0x5b
        // 588C60D8: RET 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
