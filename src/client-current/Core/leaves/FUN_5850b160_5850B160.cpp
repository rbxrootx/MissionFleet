// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B160 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_5850b160_5850B160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 F3 F9 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 ED A6 FF FF: call 0x58505880
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
