// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585875E0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_585875e0_585875E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585875fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 58h]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 38: jge 0x58587641
        __asm _emit 0x7d
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0ach]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 7C 09: jl 0x5858762a
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58587631
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        movzx ecx, byte ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A2 E8 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B1: jmp 0x585875f2
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
