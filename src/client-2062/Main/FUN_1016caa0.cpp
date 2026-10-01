// Reconstructed from FUN_1016caa0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_1016cb11();

extern "C" __declspec(naked) void FUN_1016caa0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 10176ce0h
        push 1016cd5ch
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, -10h
        push ebx
        push esi
        push edi
        ; Exact immediate encoding: mov dword ptr [ebp - 20h], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [ebp - 1ch], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp short L_1016CAE3
        __asm _emit 0xeb
        __asm _emit 0x09
L_1016CADA:
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
L_1016CAE3:
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact immediate encoding: jge short L_1016CAFC
        __asm _emit 0x7d
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        call dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], edx
        ; Exact immediate encoding: jmp short L_1016CADA
        __asm _emit 0xeb
        __asm _emit 0xde
L_1016CAFC:
        ; Exact immediate encoding: mov dword ptr [ebp - 20h], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [ebp - 4], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        call FUN_1016cb11
        ; Exact immediate encoding: jmp 1016cb2dh
        __asm _emit 0xeb
        __asm _emit 0x1c
    }
}
