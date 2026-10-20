// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045AD13 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_0045ad13_0045AD13() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e97dh
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2A: je 0x45ad61
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1D 87 04 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45ad61
        __asm _emit 0x75
        __asm _emit 0x14
        push 396h
        push 678664h
        ; Exact mapped bytes E8 E4 DF 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdf
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ad61
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x45ad31
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 09: jmp 0x45ad72
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 10h
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 74 41: je 0x45adc3
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        push eax
        push 10h
        ; Exact mapped bytes E8 2E 6B FA FF: call 0x4018bb
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0D: je 0x45adad
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5B 02 0F 00: call 0x54b003
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x45adb4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB A6: jmp 0x45ad69
        __asm _emit 0xeb
        __asm _emit 0xa6
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
