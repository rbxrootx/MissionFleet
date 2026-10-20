// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8950 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_004a8950_004A8950() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bab8h
        push 4b1298h
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
        add esp, -0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp + 0ch]
        imul eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        add ecx, eax
        mov dword ptr [ebp + 8], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7C 11: jl 0x4a89b0
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes EB E0: jmp 0x4a8990
        __asm _emit 0xeb
        __asm _emit 0xe0
        mov dword ptr [ebp - 1ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x4a89c5
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x4a89e1
        __asm _emit 0xeb
        __asm _emit 0x1c
    }
}
