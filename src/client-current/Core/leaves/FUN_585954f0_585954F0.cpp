// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585954F0 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_585954f0_585954F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C A7 F1 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa7
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 02 F0 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [eax + edx + 28h], 1
        ; Exact mapped bytes 75 44: jne 0x5859555e
        __asm _emit 0x75
        __asm _emit 0x44
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 1E: jne 0x5859553e
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 CB 1C F4 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        push 0
        push 0
        push 326h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 38 F4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5859555a
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 AD 1C F4 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 327h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 17 38 F4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58595563
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
