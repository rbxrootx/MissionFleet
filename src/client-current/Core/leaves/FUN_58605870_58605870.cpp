// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58605870 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_58605870_58605870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58605892
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 20: jge 0x586058b8
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB D1: jmp 0x58605889
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
