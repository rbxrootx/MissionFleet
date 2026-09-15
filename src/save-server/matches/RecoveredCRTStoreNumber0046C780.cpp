// Exact shared VC6 decimal digit storage helper.
extern "C" __declspec(naked) void Recovered0046C780()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm mov eax, dword ptr [ebp+0ch]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp+10h]
    __asm cmp dword ptr [edx], 1
    __asm jbe first_done
    __asm first_digits:
    __asm mov eax, dword ptr [ebp+8]
    __asm cdq
    __asm mov ecx, 0ah
    __asm idiv ecx
    __asm add edx, 30h
    __asm mov eax, dword ptr [ebp-4]
    __asm mov byte ptr [eax], dl
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp+10h]
    __asm mov eax, dword ptr [edx]
    __asm sub eax, 1
    __asm mov ecx, dword ptr [ebp+10h]
    __asm mov dword ptr [ecx], eax
    __asm mov eax, dword ptr [ebp+8]
    __asm cdq
    __asm mov ecx, 0ah
    __asm idiv ecx
    __asm mov dword ptr [ebp+8], eax
    __asm cmp dword ptr [ebp+8], 0
    __asm jle positive_done
    __asm mov edx, dword ptr [ebp+10h]
    __asm cmp dword ptr [edx], 1
    __asm ja first_digits
    __asm positive_done:
    __asm first_done:
    __asm mov eax, dword ptr [ebp+0ch]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp-8], ecx
    __asm mov edx, dword ptr [ebp+0ch]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [edx], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm sub ecx, 1
    __asm mov dword ptr [ebp-4], ecx
    __asm reverse:
    __asm mov edx, dword ptr [ebp-4]
    __asm mov al, byte ptr [edx]
    __asm mov byte ptr [ebp-0ch], al
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov al, byte ptr [edx]
    __asm mov byte ptr [ecx], al
    __asm mov ecx, dword ptr [ebp-4]
    __asm sub ecx, 1
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp-8]
    __asm mov al, byte ptr [ebp-0ch]
    __asm mov byte ptr [edx], al
    __asm mov ecx, dword ptr [ebp-8]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-8], ecx
    __asm mov edx, dword ptr [ebp-8]
    __asm cmp edx, dword ptr [ebp-4]
    __asm jb reverse
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
