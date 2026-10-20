// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB670 .. +0x4F bytes.
extern "C" __declspec(naked) void __strcats_004BB670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4bb68e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 1E: jge 0x4bb6b4
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A1 E7 FE FF: call 0x4a9e50
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB D1: jmp 0x4bb685
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov dword ptr [ebp - 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
