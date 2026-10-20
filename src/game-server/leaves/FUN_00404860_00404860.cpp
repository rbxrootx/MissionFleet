// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404860 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_00404860_00404860() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581060h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x40488c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 00 00 00: call 0x404949
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x4048ef
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 4], 0
        mov esi, esp
        push 5a046ch
        mov eax, dword ptr [ebp - 4]
        add eax, 104h
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 30 3F 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 81 2C 01 00 00 01 00: mov word ptr [ecx + 0x12c], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 82 2E 01 00 00 00 00: mov word ptr [edx + 0x12e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 134h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 138h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 140h], 0
        mov eax, dword ptr [ebp - 4]
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 3E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
