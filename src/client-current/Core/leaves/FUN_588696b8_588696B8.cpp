// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588696B8 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_588696b8_588696B8() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ebx
        cmp dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes 7E 22: jle 0x588696ea
        __asm _emit 0x7e
        __asm _emit 0x22
        push edi
        lea edi, [ebp + 10h]
        lea edi, [edi + 4]
        push dword ptr [edi]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 C7 FF FF: call 0x58865ec0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x588696ee
        __asm _emit 0x75
        __asm _emit 0x0b
        inc esi
        cmp esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7C E3: jl 0x588696cc
        __asm _emit 0x7c
        __asm _emit 0xe3
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 E1 78 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
