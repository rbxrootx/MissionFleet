// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8004 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_004f8004_004F8004() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ca69h
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
        sub esp, 44h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4f803c
        __asm _emit 0x75
        __asm _emit 0x14
        push 1fbh
        push 672eech
        ; Exact mapped bytes E8 09 0D 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f803c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f8022
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 17: jne 0x4f8061
        __asm _emit 0x75
        __asm _emit 0x17
        push 6730d8h
        push 673108h
        ; Exact mapped bytes E8 BC 85 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4f80e2
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 74 CC 02 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4ch]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 FA CD 00 00: call 0x504ea9
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        push eax
        push 30h
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 ED CC 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 1E EA FF FF: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 87 46 FD FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C F3 FF FF: call 0x4f73ef
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 0A 48 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
