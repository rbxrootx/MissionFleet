// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58686BB0 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_58686bb0_58686BB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 270fh
        ; Exact mapped bytes 7F 24: jg 0x58686be6
        __asm _emit 0x7f
        __asm _emit 0x24
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD 82 FF FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x58686c09
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 0ch], edx
        push 270fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D8 82 FF FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 270fh
        ; Exact mapped bytes 7F 24: jg 0x58686c36
        __asm _emit 0x7f
        __asm _emit 0x24
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AD 82 FF FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x58686c59
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 14h], eax
        push 270fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 88 82 FF FF: call 0x5867eee0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
