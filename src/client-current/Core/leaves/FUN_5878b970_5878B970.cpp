// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B970 .. +0x150 bytes.
extern "C" __declspec(naked) void FUN_5878b970_5878B970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 0A 00 00: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 0A 00 00: call 0x5878c450
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        add ecx, dword ptr [eax]
        mov eax, ecx
        xor edx, edx
        mov ecx, 1
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 26: jne 0x5878b9c5
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 0A 00 00: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 0A 00 00: call 0x5878c450
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        add edx, 1
        cmp dword ptr [esi], edx
        ; Exact mapped bytes 77 0B: ja 0x5878b9c5
        __asm _emit 0x77
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 07 00 00: call 0x5878c120
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 0A 00 00: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        sub eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 0A 00 00: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        and eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 0A 00 00: call 0x5878c430
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B 0A 00 00: call 0x5878c450
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 06 00 00: call 0x5878c0f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 09 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 75 2B: jne 0x5878ba59
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 06 00 00: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0D 0C 00 00: call 0x5878c650
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 09 00 00: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4E B8 CF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb8
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 BA CF FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E1 05 00 00: call 0x5878c060
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 06 00 00: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 92 01 00 00: call 0x5878bc30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 09 00 00: call 0x5878c450
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
