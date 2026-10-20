// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588688E2 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_588688e2_588688E2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        inc ecx
        push 43h
        mov dword ptr [eax + 18h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 588c4be0h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 350h], ecx
        mov eax, dword ptr [ebp + 8]
        pop ecx
        push 5
        mov dword ptr [eax + 48h], 58907808h
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 48 6C: mov word ptr [eax + 0x6c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x6c
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 88 72 01 00 00: mov word ptr [eax + 0x172], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1]
        mov eax, dword ptr [ebp + 8]
        and dword ptr [eax + 34ch], 0
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 10h]
        push eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 26 FE FF FF: call 0x58868776
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 1]
        push 4
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        pop eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 0F FF FF FF: call 0x58868888
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
    }
}
