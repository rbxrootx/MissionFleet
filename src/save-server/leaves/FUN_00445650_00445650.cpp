// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445650 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_00445650_00445650() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 32: je 0x445690
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 2A: je 0x445690
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
