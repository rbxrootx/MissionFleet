// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787C40 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_58787c40_58787C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        push 38h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 60h
        push ecx
        ; Exact mapped bytes E8 35 4C 0C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx + 0ah]
        push eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 0bh]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 00 00 00: call 0x58787d50
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58787c84
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x58787d18
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 46 E2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 30 E2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe2
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 69h]
        cmp eax, 2
        ; Exact mapped bytes 75 4C: jne 0x58787d09
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0D E2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F7 E1 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 94h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 38 7B D1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7b
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
