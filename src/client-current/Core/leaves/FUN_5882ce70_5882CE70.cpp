// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882CE70 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_5882ce70_5882CE70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF ED FF FF: call 0x5882bc70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be7ach
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 60h], 0
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 0a0h], 0
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 0e0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 128h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 120h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
