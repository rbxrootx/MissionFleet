// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AF490 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_586af490_586AF490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586af4ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 59: jge 0x586af50a
        __asm _emit 0x7d
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 50h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ah
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 56 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x56
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 6A DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 58h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 1ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 56 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x56
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 29 6A DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6a
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 98: jmp 0x586af4a2
        __asm _emit 0xeb
        __asm _emit 0x98
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
