// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4310 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_587b4310_587B4310() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DA E7 D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 E7 D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 10 E6 FF FF: call 0x587b2950
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
