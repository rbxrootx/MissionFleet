// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057AD6F .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_0057ad6f_0057AD6F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fcbfh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 18h], eax
        push 40dh
        push 67d108h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 B3 F4 F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9F 01 FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 4B: jmp 0x57ae1f
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 636e20h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AF F3 F5 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57adf9
        __asm _emit 0x75
        __asm _emit 0x14
        push 417h
        push 67d108h
        ; Exact mapped bytes E8 4C DF FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdf
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57adf9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
