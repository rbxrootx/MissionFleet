// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411930 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_00411930_00411930() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ae2dh
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
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5ch]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 0F BF 05 7C 03 67 00: movsx eax, word ptr [0x67037c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 1
        push eax
        push 6702e8h
        push 0cach
        ; Exact mapped bytes E8 57 A7 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1E: je 0x4119ad
        __asm _emit 0x74
        __asm _emit 0x1e
        push 2710h
        push 633f64h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 40h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 93 F7 FE FF: call 0x40113b
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4119b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 5ch
        cmp ebp, esp
        ; Exact mapped bytes E8 15 34 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
