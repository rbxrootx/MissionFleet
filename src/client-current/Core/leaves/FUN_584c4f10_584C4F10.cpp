// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C4F10 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_584c4f10_584C4F10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 5
        ; Exact mapped bytes 8B 0D A0 07 96 58: mov ecx, dword ptr [0x589607a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 FB FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 18 FC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58895b00h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
