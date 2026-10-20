// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004382E4 .. +0x233 bytes.
extern "C" __declspec(naked) void FUN_004382e4_004382E4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 26: jne 0x438334
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 EA 6C 00 00: call 0x43f007
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0d98h], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 D2 01 00 00: jmp 0x438506
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 68 BC FC FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 8], eax
        push 501h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C5 03 00 00: call 0x438720
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DB 03 00 00: call 0x438740
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5b5b64h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8C 03 00 00: call 0x438700
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 5B 04 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 110h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10ch], 2710h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 114h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 118h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 18 04 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 11ch], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 120h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 124h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 128h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 12ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 130h], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x438424
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0b4h
        ; Exact mapped bytes 7D 52: jge 0x43847f
        __asm _emit 0x7d
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 4
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx + 134h], 0
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 138h], 0
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax + 13ch], 0
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 4
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx + 140h], 0
        ; Exact mapped bytes EB 9C: jmp 0x43841b
        __asm _emit 0xeb
        __asm _emit 0x9c
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 0F 6F 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0c78h
        ; Exact mapped bytes E8 17 92 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x92
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0c7ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c80h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0c84h], 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DF 90 FC FF: call 0x4015a9
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 1B D0 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 E4 02 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7D 01 00 00: call 0x438680
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 CF 02 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
