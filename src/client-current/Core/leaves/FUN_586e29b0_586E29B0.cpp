// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E29B0 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_586e29b0_586E29B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 41: jge 0x586e2a00
        __asm _emit 0x7d
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B 35 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x35
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 10h], eax
        push 25h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 20 DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 CD DB FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xcd
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3F: jmp 0x586e2a3f
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CA 34 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x34
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 1ch], edx
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 20 DA FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 82 CD DB FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xcd
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BC E8 DA FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2A 87 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
