// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004015A9 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_004015a9_004015A9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ca4h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ca8h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ca0h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0cach], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0d70h]
        ; Exact mapped bytes E8 F3 18 06 00: call 0x462efa
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c7ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        ; Exact mapped bytes E8 CE E7 00 00: call 0x40fdf1
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d78h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c7ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d7ch]
        ; Exact mapped bytes E8 9B 3C 03 00: call 0x4352e4
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d7ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0c7ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0d74h]
        ; Exact mapped bytes E8 3A 7D 07 00: call 0x4793ac
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7d
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x401684
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 1B: jge 0x4016a5
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 6
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 0cb0h]
        ; Exact mapped bytes E8 36 9F 07 00: call 0x47b5d9
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x9f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB D6: jmp 0x40167b
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 104h], 501h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0d80h], 0f0h
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 71 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0d84h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0d98h], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0d88h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0d8ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0d90h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0d94h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0d9ch], 0
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 B1 70 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x70
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
