// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421C87 .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_00421c87_00421C87() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 0ch]
        and byte ptr [ebp - 14h], 0
        mov eax, dword ptr [eax + 8]
        cmp eax, -1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7C 08: jl 0x421ca7
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 18h]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 7C 05: jl 0x421cac
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E8 DF 08 00 00: call 0x42258b
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov ebx, 0e06d7363h
        push edi
        mov edi, 19930520h
        cmp dword ptr [esi], ebx
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x421e0f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 10h], 3
        ; Exact mapped bytes 75 62: jne 0x421d2c
        __asm _emit 0x75
        __asm _emit 0x62
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 75 5D: jne 0x421d2c
        __asm _emit 0x75
        __asm _emit 0x5d
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 75 57: jne 0x421d2c
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes E8 E9 07 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x421e0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DA 07 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 D2 07 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 70h]
        push 1
        push esi
        mov dword ptr [ebp + 10h], eax
        mov byte ptr [ebp - 14h], 1
        ; Exact mapped bytes E8 B5 48 00 00: call 0x4265b8
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 05: jne 0x421d0e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 7D 08 00 00: call 0x42258b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi], ebx
        ; Exact mapped bytes 0F 85 F9 00 00 00: jne 0x421e0f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 10h], 3
        ; Exact mapped bytes 75 10: jne 0x421d2c
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 75 0B: jne 0x421d2c
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x421d2c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 5F 08 00 00: call 0x42258b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi], ebx
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x421e0f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 10h], 3
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x421e0f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x421e0f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 10h]
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 4]
        push eax
        push edi
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 9A C8 FF FF: call 0x41e5f8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov ebx, eax
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F 83 8B 00 00 00: jae 0x421dfa
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx], edi
        ; Exact mapped bytes 7F 7C: jg 0x421def
        __asm _emit 0x7f
        __asm _emit 0x7c
        cmp edi, dword ptr [ebx + 4]
        ; Exact mapped bytes 7F 77: jg 0x421def
        __asm _emit 0x7f
        __asm _emit 0x77
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebx + 0ch]
        test eax, eax
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7E 64: jle 0x421dec
        __asm _emit 0x7e
        __asm _emit 0x64
        mov eax, dword ptr [esi + 1ch]
        mov eax, dword ptr [eax + 0ch]
        lea edi, [eax + 4]
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7E 1F: jle 0x421db9
        __asm _emit 0x7e
        __asm _emit 0x1f
        push dword ptr [esi + 1ch]
        push dword ptr [edi]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 01 00 00: call 0x421ee4
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x421dc8
        __asm _emit 0x75
        __asm _emit 0x1a
        dec dword ptr [ebp - 8]
        add edi, 4
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7F E1: jg 0x421d9a
        __asm _emit 0x7f
        __asm _emit 0xe1
        dec dword ptr [ebp - 0ch]
        add dword ptr [ebp + 8], 10h
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7F C2: jg 0x421d88
        __asm _emit 0x7f
        __asm _emit 0xc2
        ; Exact mapped bytes EB 24: jmp 0x421dec
        __asm _emit 0xeb
        __asm _emit 0x24
        push dword ptr [ebp - 14h]
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push ebx
        push dword ptr [edi]
        push dword ptr [ebp + 8]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 0C 02 00 00: call 0x421ff5
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        mov edi, dword ptr [ebp - 10h]
        inc dword ptr [ebp - 4]
        add ebx, 14h
        ; Exact mapped bytes E9 69 FF FF FF: jmp 0x421d63
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 0A: je 0x421e0a
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        push esi
        ; Exact mapped bytes E8 71 05 00 00: call 0x422379
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
        cmp byte ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 20: jne 0x421e35
        __asm _emit 0x75
        __asm _emit 0x20
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp - 10h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 0A 00 00 00: call 0x421e3a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        ; Exact mapped bytes EB D5: jmp 0x421e0a
        __asm _emit 0xeb
        __asm _emit 0xd5
        ; Exact mapped bytes E9 F0 06 00 00: jmp 0x42252a
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
