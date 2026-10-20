// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586AE1 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00586ae1_00586AE1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 9ch]
        push eax
        ; Exact mapped bytes E8 9A F9 F1 FF: call 0x4a64a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 39: je 0x586b48
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 F4 F5 FF: call 0x4e5f50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 F3 F5 FF: call 0x4e5e47
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x586b3b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b2h
        push 67d92ch
        ; Exact mapped bytes E8 0A 22 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586b3b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x586b17
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x586b4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
