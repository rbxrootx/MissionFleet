// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588654F4 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_588654f4_588654F4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp esi, 3fffffffh
        ; Exact mapped bytes 73 39: jae 0x5886553e
        __asm _emit 0x73
        __asm _emit 0x39
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        div dword ptr [ebp + 10h]
        cmp ecx, eax
        ; Exact mapped bytes 73 2A: jae 0x5886553e
        __asm _emit 0x73
        __asm _emit 0x2a
        imul ecx, dword ptr [ebp + 10h]
        shl esi, 2
        mov eax, esi
        not eax
        cmp eax, ecx
        ; Exact mapped bytes 76 1B: jbe 0x5886553e
        __asm _emit 0x76
        __asm _emit 0x1b
        lea eax, [esi + ecx]
        push 1
        push eax
        ; Exact mapped bytes E8 E2 9C 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov esi, eax
        ; Exact mapped bytes E8 D9 76 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x58865540
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}
