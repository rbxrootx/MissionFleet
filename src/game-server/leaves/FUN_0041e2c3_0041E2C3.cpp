// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E2C3 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0041e2c3_0041E2C3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 ED 08 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 C9 07 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 C0 0A 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41e31d
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1B: jmp 0x41e338
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 2B 0A 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A B9 FF FF: call 0x419c8d
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 9E A4 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
