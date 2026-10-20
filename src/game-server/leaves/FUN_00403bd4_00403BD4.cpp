// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403BD4 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_00403bd4_00403BD4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DF 4B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes 0F 82 CC 00 00 00: jb 0x403ce5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 10h]
        add ecx, dword ptr [edx + 10h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 14h], ecx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 40cach]
        ; Exact mapped bytes E8 E1 3D 03 00: call 0x437a1d
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 D9 D6 FF FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 49: je 0x403ca0
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 03 00 00: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 40cach]
        ; Exact mapped bytes E8 95 3E 03 00: call 0x437b0c
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 40cach]
        ; Exact mapped bytes E8 33 44 03 00: call 0x4380bf
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 70 00 00 00: call 0x403d08
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB B1: jmp 0x403c51
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ecx + 40cach]
        ; Exact mapped bytes E8 6A 41 03 00: call 0x437e1b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E8 4A 18 13 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x18
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 13 4B 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5B 22 04 00: call 0x445f2f
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 40cach]
        ; Exact mapped bytes E8 2C 43 03 00: call 0x438011
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 F0 4A 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
