// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416DF2 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00416df2_00416DF2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x416e1b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 1C: jge 0x416e3d
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [edx + eax*4 + 78h], -1
        ; Exact mapped bytes 75 07: jne 0x416e3b
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x416e3f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D5: jmp 0x416e12
        __asm _emit 0xeb
        __asm _emit 0xd5
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
