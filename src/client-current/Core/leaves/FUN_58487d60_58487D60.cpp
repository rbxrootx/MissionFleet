// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487D60 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58487d60_58487D60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 23h
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        imul eax, edx, -1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 10h], 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        sub ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 72 06: jb 0x58487daa
        __asm _emit 0x72
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 23h
        ; Exact mapped bytes 76 10: jbe 0x58487dba
        __asm _emit 0x76
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 20 92 3C 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x92
        __asm _emit 0x3c
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov esp, ebp
        pop ebp
    }
}
