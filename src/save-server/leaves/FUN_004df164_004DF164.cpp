// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF164 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_004df164_004DF164() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push 104h
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push 104h
        push 104h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 03 DF FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 08 B9 68 00: call dword ptr [0x68b908]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4df1b6
        __asm _emit 0x75
        __asm _emit 0x0f
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E7 D9 FE FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 13 E0 FE FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
