// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F9F7 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_0047f9f7_0047F9F7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47fa20
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 40: jge 0x47fa66
        __asm _emit 0x7d
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 60h], -1
        ; Exact mapped bytes 75 31: jne 0x47fa64
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 1
        ; Exact mapped bytes 75 12: jne 0x47fa64
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 60h], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x47fa69
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB B1: jmp 0x47fa17
        __asm _emit 0xeb
        __asm _emit 0xb1
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
