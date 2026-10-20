// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041457B .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0041457b_0041457B() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0ch]
        lea edi, [esi + 0ch]
        cmp dword ptr [eax - 8], 0
        ; Exact mapped bytes 74 1C: je 0x4145a7
        __asm _emit 0x74
        __asm _emit 0x1c
        push ebx
        lea ebx, [esi + 0d4h]
        push 43d54ch
        mov ecx, ebx
        ; Exact mapped bytes E8 83 99 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 B7 99 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        pop ebx
        mov eax, dword ptr [esi + 10h]
        lea edi, [esi + 10h]
        cmp dword ptr [eax - 8], 0
        ; Exact mapped bytes 74 1A: je 0x4145cd
        __asm _emit 0x74
        __asm _emit 0x1a
        add esi, 0d4h
        push 43d540h
        mov ecx, esi
        ; Exact mapped bytes E8 5C 99 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 90 99 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
