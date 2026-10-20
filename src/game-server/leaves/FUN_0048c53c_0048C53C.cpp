// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048C53C .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_0048c53c_0048C53C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 2C: jne 0x48c590
        __asm _emit 0x75
        __asm _emit 0x2c
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 64 C2 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x48c671
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 58h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ach], 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 40h], 0
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4ch], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 C1 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [edx + 64h], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 81 C1 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 8]
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 64 C1 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
