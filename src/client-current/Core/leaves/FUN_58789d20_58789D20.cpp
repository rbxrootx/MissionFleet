// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58789D20 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_58789d20_58789D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 4], al
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 21: je 0x58789d56
        __asm _emit 0x74
        __asm _emit 0x21
        cmp byte ptr [ebp - 4], 1
        ; Exact mapped bytes 74 02: je 0x58789d3d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 30: jmp 0x58789d6d
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8D C1 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc1
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58789d6d
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 C1 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc1
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
