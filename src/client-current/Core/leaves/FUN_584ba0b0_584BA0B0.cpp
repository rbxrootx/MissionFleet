// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BA0B0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_584ba0b0_584BA0B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 E5 FF FF: call 0x584b8630
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
