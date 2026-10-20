// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792FF0 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_58792ff0_58792FF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5879300b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        ; Exact mapped bytes E8 2A 52 CF FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x52
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 56: jae 0x58793071
        __asm _emit 0x73
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 49 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x49
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 28h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x5879306f
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A5 49 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x49
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 04: jmp 0x58793073
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 91: jmp 0x58793002
        __asm _emit 0xeb
        __asm _emit 0x91
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
