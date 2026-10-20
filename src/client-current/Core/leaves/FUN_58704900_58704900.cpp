// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58704900 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58704900_58704900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 30 D8 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x30
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
