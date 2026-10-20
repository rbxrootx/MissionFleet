// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3720 .. +0x106 bytes.
extern "C" __declspec(naked) void _DrawSingle_CDragListBox__QAEXH_Z_004D3720() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cddfh
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
        sub esp, 28h
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 05: jne 0x4d3749
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x4d3816
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE EF 04 00: call 0x52271c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F8 25 06 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 96 89 06 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 C9 3B 06 00: call 0x537336
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1D 3C 06 00: call 0x53739d
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A5 8B 06 00: call 0x53c32d
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FD E8 02 00: call 0x502094
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 3F B5 06 00: call 0x53ece6
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        add edx, 2
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 1ch]
        sub eax, 2
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2E DC 02 00: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 5a0049h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 7B 26 06 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 5C 26 06 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 44 5B 06 00: call 0x539333
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F8 DB 02 00: call 0x5013f3
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BE 8B 06 00: call 0x53c3c5
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 3F 3B 06 00: call 0x537355
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x3b
        __asm _emit 0x06
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
