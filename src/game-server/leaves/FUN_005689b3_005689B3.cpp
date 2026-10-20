// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005689B3 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_005689b3_005689B3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f75ch
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
        sub esp, 14h
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x5689e1
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax*8 + 58a010h]
        mov dword ptr [ebp + 1ch], ecx
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 2A: jne 0x568a11
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes E8 57 CA FD FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x568a04
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax*8 + 58a014h]
        mov dword ptr [ebp + 20h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x568a11
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx*8 + 58a03ch]
        mov dword ptr [ebp + 20h], eax
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 35 F8 FF FF: call 0x568250
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 8C F9 FF FF: call 0x5683cd
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x568a60
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 48 F8 FF FF: call 0x5682a3
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 5C: jmp 0x568abc
        __asm _emit 0xeb
        __asm _emit 0x5c
        push 80000000h
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 41 04 00 00: call 0x568eb0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes E8 53 00 00 00: call 0x568acc
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 22: je 0x568aa4
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 1C: je 0x568aa4
        __asm _emit 0x74
        __asm _emit 0x1c
        push 80000000h
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 19 04 00 00: call 0x568eb0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes E8 2B 00 00 00: call 0x568acc
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EA F7 FF FF: call 0x5682a3
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
