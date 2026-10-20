// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439CC1 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_00439cc1_00439CC1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a43dh
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
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 01 72 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x72
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA E2 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 71 56 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1dc0h
        ; Exact mapped bytes E8 79 79 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x79
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1ddch
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 89 EA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4B 72 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x72
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1df4h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 EA 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 1e70h], edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 1e74h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 18h]
        mov dword ptr [edx + 1e78h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ecx + 1e68h], eax
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 69 3A 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
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
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 E5 E9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
