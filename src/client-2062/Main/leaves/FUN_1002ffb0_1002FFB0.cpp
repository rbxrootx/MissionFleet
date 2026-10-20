// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002FFB0 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_1002ffb0_1002FFB0() {
    __asm {
        push ebx
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov eax, dword ptr [edi + 0ach]
        mov dword ptr [edi + 0a4h], 40000000h
        test eax, eax
        ; Exact mapped bytes 7E 31: jle 0x1002fffb
        __asm _emit 0x7e
        __asm _emit 0x31
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push esi
        lea esi, [edi + 0b0h]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 28h]
        cmp eax, ebp
        ; Exact mapped bytes 7F 04: jg 0x1002ffe3
        __asm _emit 0x7f
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes EB 03: jmp 0x1002ffe6
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, ebp
        push eax
        ; Exact mapped bytes E8 35 F1 0C 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf1
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ach]
        inc ebx
        add esi, 4
        cmp ebx, eax
        ; Exact mapped bytes 7C DD: jl 0x1002ffd6
        __asm _emit 0x7c
        __asm _emit 0xdd
        pop esi
        pop ebp
        pop edi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
