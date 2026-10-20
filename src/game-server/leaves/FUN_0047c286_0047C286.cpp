// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C286 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_0047c286_0047C286() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c1edh
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
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 4
        ; Exact mapped bytes E8 E2 13 07 00: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x13
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x47c3ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x47c2f8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 80h
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x47c3ae
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x47c3ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c431ch
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 4
        ; Exact mapped bytes E8 36 1C 07 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 150h
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 4
        ; Exact mapped bytes E8 21 1C 07 00: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CB 4B 0B 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 84 BC 00 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 AC 4B 0B 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 5c4320h
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 EB 25 05 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 4
        ; Exact mapped bytes E8 4B 1C 07 00: call 0x4edfce
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 55 A3 FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B2 14 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A3 14 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x47c2ef
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 10 07 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        or edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 03 C4 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
