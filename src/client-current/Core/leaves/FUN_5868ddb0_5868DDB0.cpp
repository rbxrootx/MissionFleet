// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868DDB0 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_5868ddb0_5868DDB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 11ch]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 CE F3 FF: call 0x585cac40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xce
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + eax*4 + 5d0h]
        and dl, 1fh
        mov al, byte ptr [ebp - 4]
        and al, 0e0h
        or al, dl
        mov byte ptr [ebp - 4], al
        mov cl, byte ptr [ebp - 4]
        and cl, 1fh
        or cl, 20h
        mov byte ptr [ebp - 4], cl
        mov byte ptr [ebp - 3], 0
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 11ch]
        mov byte ptr [ebp - 2], al
        push 4
        lea ecx, [ebp - 4]
        push ecx
        push 16h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 90 F5 FF: call 0x585e6e20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
