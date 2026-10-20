// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486B30 .. +0x252 bytes.
extern "C" __declspec(naked) void FUN_00486b30_00486B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 18 AB 0A 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 3C 28 00 00: call 0x4893a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 DE 27 00 00: call 0x489350
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 70 27 00 00: call 0x4892f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 581e08h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 38h], 8000h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes E8 C7 67 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 34h], edx
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 0
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 4F 87 04 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 5A AA 0A 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7D 1B 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [edx + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 33: je 0x486ccf
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 03 27 00 00: call 0x4893c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 A1 26 00 00: call 0x489370
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 100h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18h]
        shl edx, 3
        push edx
        ; Exact mapped bytes E8 C4 66 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x66
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0cch], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 0d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 0e0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dch], 0
        mov eax, dword ptr [ebp - 10h]
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 64 1A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
