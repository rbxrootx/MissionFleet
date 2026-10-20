// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000C610 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_1000c610_1000C610() {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr [ebx], 10175278h
        lea esi, [ebx + 6674h]
        mov edi, 20h
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x1000c63b
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 52 01 16 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E5: jne 0x1000c626
        __asm _emit 0x75
        __asm _emit 0xe5
        mov ecx, ebx
        ; Exact mapped bytes E8 78 D1 0D 00: call 0x100e97c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd1
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
