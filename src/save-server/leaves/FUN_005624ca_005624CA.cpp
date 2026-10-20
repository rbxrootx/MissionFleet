// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005624CA .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_005624ca_005624CA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 2edh
        push 67c6f0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 77 7D F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        push 2eeh
        push 67c6f0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 64 7D F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        push 1
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 5D 0F F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x562521
        __asm _emit 0x75
        __asm _emit 0x14
        push 2efh
        push 67c6f0h
        ; Exact mapped bytes E8 24 68 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562521
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5624fc
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE 42 FF FF: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF EF FC FF: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x562567
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1A: jmp 0x562581
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 4F FD FF: call 0x537499
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 29 9B FE FF: call 0x54c0aa
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
