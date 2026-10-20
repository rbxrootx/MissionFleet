// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041EF2F .. +0xFD bytes.
extern "C" __declspec(naked) void original_program_entry_0041EF2F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43f9e0h
        push 423118h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 58h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        ; Exact mapped bytes FF 15 E8 C1 43 00: call dword ptr [0x43c1e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        xor edx, edx
        mov dl, ah
        ; Exact mapped bytes 89 15 C8 FC 44 00: mov dword ptr [0x44fcc8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        mov ecx, eax
        and ecx, 0ffh
        ; Exact mapped bytes 89 0D C4 FC 44 00: mov dword ptr [0x44fcc4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        shl ecx, 8
        add ecx, edx
        ; Exact mapped bytes 89 0D C0 FC 44 00: mov dword ptr [0x44fcc0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        shr eax, 10h
        ; Exact mapped bytes A3 BC FC 44 00: mov dword ptr [0x44fcbc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 25 41 00 00: call 0x4230b2
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x41ef9a
        __asm _emit 0x75
        __asm _emit 0x08
        push 1ch
        ; Exact mapped bytes E8 C3 00 00 00: call 0x41f05c
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 BD 34 00 00: call 0x42245c
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x41efab
        __asm _emit 0x75
        __asm _emit 0x08
        push 10h
        ; Exact mapped bytes E8 B2 00 00 00: call 0x41f05c
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor esi, esi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 CC 3D 00 00: call 0x422d81
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 C1 43 00: call dword ptr [0x43c120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A3 C8 13 45 00: mov dword ptr [0x4513c8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 8A 3C 00 00: call 0x422c4f
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 64 FC 44 00: mov dword ptr [0x44fc64], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 33 3A 00 00: call 0x422a02
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 39 00 00: call 0x422949
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8E 21 00 00: call 0x421167
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], esi
        lea eax, [ebp - 5ch]
        push eax
        ; Exact mapped bytes FF 15 1C C1 43 00: call dword ptr [0x43c11c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 39 00 00: call 0x4228f1
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        test byte ptr [ebp - 30h], 1
        ; Exact mapped bytes 74 06: je 0x41effa
        __asm _emit 0x74
        __asm _emit 0x06
        movzx eax, word ptr [ebp - 2ch]
        ; Exact mapped bytes EB 03: jmp 0x41effd
        __asm _emit 0xeb
        __asm _emit 0x03
        push 0ah
        pop eax
        push eax
        push dword ptr [ebp - 64h]
        push esi
        push esi
        ; Exact mapped bytes FF 15 04 C2 43 00: call dword ptr [0x43c204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EB D5 00 00: call 0x42c5fa
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        push eax
        ; Exact mapped bytes E8 7C 21 00 00: call 0x421194
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx]
        mov dword ptr [ebp - 68h], ecx
        push eax
        push ecx
        ; Exact mapped bytes E8 50 37 00 00: call 0x422779
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ret
    }
}
