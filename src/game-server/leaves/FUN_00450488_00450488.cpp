// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00450488 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_00450488_00450488() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b3f2h
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
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], ecx
        push 0
        ; Exact mapped bytes E8 E5 97 05 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 C6 BC 05 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        push 5ch
        ; Exact mapped bytes E8 D9 CE 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0D: je 0x450507
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BE C2 00 00: call 0x45c7c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x45050e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 76ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 18h], edx
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 82 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [ebp + 10h]
        mov byte ptr [edx + 55h], al
        mov ecx, dword ptr [ebp - 10h]
        mov dl, byte ptr [ebp + 14h]
        mov byte ptr [ecx + 54h], dl
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [ebp + 18h]
        mov byte ptr [eax + 56h], cl
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 58h], eax
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1ch
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 17 82 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 03 82 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 8
        ; Exact mapped bytes E8 2E D2 00 00: call 0x45d820
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DA 81 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 52 C1 00 00: call 0x45c760
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 BD 81 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
